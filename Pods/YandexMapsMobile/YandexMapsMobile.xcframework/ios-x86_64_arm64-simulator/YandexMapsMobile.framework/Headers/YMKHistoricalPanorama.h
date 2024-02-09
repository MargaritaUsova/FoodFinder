#import <YandexMapsMobile/YRTExport.h>

#import <Foundation/Foundation.h>

/**
 * Undocumented
 */
YRT_EXPORT @interface YMKHistoricalPanorama : NSObject

/**
 * Undocumented
 */
@property (nonatomic, readonly, nonnull) NSString *name;

/**
 * Undocumented
 */
@property (nonatomic, readonly, nonnull) NSString *panoramaId;

/**
 * Undocumented
 */
@property (nonatomic, readonly, nonnull) NSDate *timestamp;


+ (nonnull YMKHistoricalPanorama *)historicalPanoramaWithName:(nonnull NSString *)name
                                                   panoramaId:(nonnull NSString *)panoramaId
                                                    timestamp:(nonnull NSDate *)timestamp;


@end
