//
//  CDDeviceInfo.h
//  Glass-Example
//
//  Created by Arun Gupta on 13/07/16.
//  Copyright © 2016 rain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CDDeviceInfo : NSObject
@property (readonly, strong, nonatomic) NSString* ua;
@property (readonly) NSInteger dnt ;
@property (readonly) NSInteger lmt ;
@property (readonly) NSInteger devicetype;
@property (readonly, strong, nonatomic) NSString* make;
@property (readonly, strong, nonatomic) NSString* model;
@property (readonly, strong, nonatomic) NSString* os;
@property (readonly, strong, nonatomic) NSString* osv;
@property (readonly, strong, nonatomic) NSString* hwv;
@property (readonly) NSInteger h;
@property (readonly) NSInteger w;
@property (readonly) float pxratio;
@property (readonly) NSInteger js;
@property (readonly, strong, nonatomic) NSString* flashver;
@property (readonly, strong, nonatomic) NSString* language;
@property (readonly, strong, nonatomic) NSString* carrier;
@property (readonly) NSInteger connectiontype;
@property (readonly, strong, nonatomic) NSString* ifa;
@property (readonly, strong, nonatomic) NSString* dpidsha1;
@property (readonly, strong, nonatomic) NSString* dpidmd5;
+(CDDeviceInfo*)deviceInfo;
@end