//
//  CDAds.h
//  CDAds
//
//  Created by Arun Gupta on 15/07/16.
//  Copyright © 2016 Chalkdigital. All rights reserved.
//

#import "CDAdBannerView.h"
#import "CDAdSize.h"
#import "CDADRequest.h"
#import "CDDeviceInfo.h"
#import "CDInitialisationParams.h"
#import "CDGeoInfo.h"
#import "CDTrackingRequest.h"
#import "CDADSize.h"
#import "CDADController.h"


//! Project version number for CDAds.
FOUNDATION_EXPORT double CDAdsVersionNumber;

//! Project version string for CDAds.
FOUNDATION_EXPORT const unsigned char CDAdsVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <CDAds/PublicHeader.h>


@protocol CDAdsDelegate
@optional
-(void)cdAdsDidUpdateLocation:(CLLocation *)location;
@end


@interface CDAds : NSObject
@property (strong, nonatomic) UIViewController<CDAdsDelegate>* cdAdsDelegate;
@property (strong, nonatomic, readonly) CDInitialisationParams *cdInitialisationParams;

/**
 * Property to enable or disable Location Services.
 * @discussion If Location Services are stopped, they cannot be re-enabled from the
 * background.
 * @since v2.0
 */
@property (nonatomic) BOOL locationServices;

/**
 * Property to enable standard location services in the Foreground Only.
 * @discussion If enabled, standard location services will start updating
 * locations in the `-applicationWillEnterForeground:` and stop updating
 * locations in `-applicationWillResignActive:`.
 * @since v2.0.1
 */
@property (nonatomic, assign) BOOL enableGPSInForegroundOnly;

/**
 * Property to enable or disable Location Reporting.
 * @discussion Location services will continue to be enabled but at the lowest accuracy.
 * @since v2.0
 */
@property (nonatomic, assign) BOOL locationReporting;

/**
 * Property to enable or disable Real Time Location Processing Framework.
 * @since v2.0
 */
@property (nonatomic, assign) BOOL realTimeProcessing;

/**
 * Property to set the maximum allowed dwell time variable used to calculate an
 * expiration date for the attendances.
 */
@property (nonatomic, assign) NSInteger maximumAllowedDwellTime;

/**
 * Property to define what type of location search to use. There are two options;
 * @b CDRTLPSearchTypeWithinPolygon, which will return fences the location
 * provided is contained within. And, @b CDRTLPSearchTypeCenterPointDistance,
 * returning fences that have a center point that is less than or equal to a stated
 * distance away from the location.
 */
@property (nonatomic, assign) CDRTLPSearchType searchType;

/**
 * Property that specifies the search distance when looking for fences with a center
 * point within a given range in meters.
 * @discussion The distance is units of meters.
 */
@property (nonatomic, assign) NSInteger searchDistance;

/**
 * Property to enable or disable use of the platform AdvertisersID.
 * @since v2.0
 */
@property (nonatomic, assign) BOOL enableAdvertiserId;

/**
 * Property to enable or disable Test Mode in the SDK.
 * @since v2.0
 */
@property (nonatomic, assign) BOOL sdkTestMode;

/**
 *  Property to set the type of location awareness support for the background.
 *  @since v2.0
 */
@property (nonatomic, assign) CDLocationAwarenessSupport locationAwarenessSupport;

/**
 * Property to set the location setting preset to be used
 * @since v2.0
 */
@property (nonatomic, assign) CDLocationServicePreset  locationSettingsPreset;


+(CDAds*)initialiseWithParams:(CDInitialisationParams*)cdInitialisationParams;
+(CDAds*)runningInstance;
-(void)launch;

@end
