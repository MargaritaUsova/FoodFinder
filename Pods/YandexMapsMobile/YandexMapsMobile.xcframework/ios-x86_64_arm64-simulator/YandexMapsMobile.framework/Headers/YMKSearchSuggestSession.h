#import <YandexMapsMobile/YMKGeometry.h>
#import <YandexMapsMobile/YRTExport.h>

@class YMKSuggestItem;
@class YMKSuggestOptions;

/**
 * Undocumented
 */
typedef void(^YMKSearchSuggestSessionResponseHandler)(
    NSArray<YMKSuggestItem *> * _Nullable suggest,
    NSError * _Nullable error);

/**
 * Undocumented
 */
YRT_EXPORT @interface YMKSearchSuggestSession : NSObject

/**
 * Begin a suggest request. The current request is cancelled, if
 * present.
 *
 * @param text Text to get suggestions for.
 * @param window Current map window position.
 * @param suggestOptions Various additional suggest parameters. See the
 * YMKSuggestOptions definition for details.
 * @param suggestListener Function called when the result is ready.
 */
- (void)suggestWithText:(nonnull NSString *)text
                 window:(nonnull YMKBoundingBox *)window
         suggestOptions:(nonnull YMKSuggestOptions *)suggestOptions
        responseHandler:(nonnull YMKSearchSuggestSessionResponseHandler)responseHandler;

/**
 * Cancels current suggest request and resets internal state. Next
 * queries via this suggest session will be seen as a new suggest
 * session from backend point of view.
 */
- (void)reset;

@end
