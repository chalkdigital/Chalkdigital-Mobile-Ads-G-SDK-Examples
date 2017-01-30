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
@property (readonly, strong, nonatomic) CDInitialisationParams *cdInitialisationParams;
@property (readonly) BOOL limitedTrackingEnabled;
@property (nonatomic) BOOL enableTracking;
+(CDAds*)initialiseWithParams:(CDInitialisationParams*)cdInitialisationParams enableTracking:(BOOL)enableTracking;
+(CDAds*)runningInstance;
@end
