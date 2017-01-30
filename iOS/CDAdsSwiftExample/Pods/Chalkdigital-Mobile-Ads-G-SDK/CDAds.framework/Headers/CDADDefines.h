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

