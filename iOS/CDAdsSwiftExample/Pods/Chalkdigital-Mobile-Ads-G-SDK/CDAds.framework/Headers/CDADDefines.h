//
//  CDADDefines.h
//  CDAds
//
//  Created by Arun Gupta on 18/12/16.
//  Copyright © 2016 Chalkdigital. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum CDLogLevels{
    CDLogLevelNone,
    CDLogLevelDetail
}CDLogLevel;

typedef enum CDADProviders{
    CDADProviderChalk,
    CDADProviderGoogle,
    CDADProviderAdMarvel,
    CDADProviderAdColonyAurora,
    CDADProviderAmazon,
    CDADProviderChartboost,
    CDADProviderFacebook,
    CDADProviderInMobi,
    CDADProviderHeyzap,
    CDADProviderMillenial,
    CDADProviderVungle,
    CDADProviderVurve,
    CDADProviderUnityAds,
    CDADProviderYuMe
}CDADProvider;

typedef enum : NSInteger {
    
    // Location updated every 12 minutes, nearest 2 meters accuracy
    CDLocationServicePresetDefault = 0,
    
    // Location updated every 30 minutes, nearest 10 meters accuracy
    CDLocationServicePresetLow = 1,
    
    // Location updated every 12 minutes, nearest 10 meters accuracy
    CDLocationServicePresetMedium = 2,
    
    // Location updated every 5 minutes, nearest 3 meters accuracy
    CDLocationServicePresetHigh = 3
} CDLocationServicePreset;


typedef NS_ENUM(NSInteger, CDLocationAwarenessSupport){
    CDLocationAwarenessSupportSignificantChanges,
    CDLocationAwarenessSupportRegionMonitoring,
    CDLocationAwarenessSupportNone
};

typedef NS_ENUM(NSInteger, CDEnvironmentType)
{
    CDEnvironmentNone = 0,
    CDEnvironmentSystest2 = 1,
    CDEnvironmentProduction = 2,
    CDEnvironmentSandbox = 3
};

typedef NS_ENUM(NSInteger, CDRTLPSearchType){
    CDRTLPSearchTypeNone,
    CDRTLPSearchTypeWithinPolygon,
    CDRTLPSearchTypeCenterPointDistance
};

typedef NS_ENUM(NSInteger, CDRegistrationTime)
{
    CDRegistrationTimeFiveMinutes       =          60*5,
    CDRegistrationTimeTenMinutes        =          60*10,
    CDRegistrationTimeFifteenMinutes    =          60*15,
    CDRegistrationTimeFiveHours         =          60*60*5,
    CDRegistrationTimeTwelveHours       =          60*60*12,
    CDRegistrationTimeTwentyFourHours   =          60*60*24,
    CDRegistrationTimeNone              =          0
    
};
