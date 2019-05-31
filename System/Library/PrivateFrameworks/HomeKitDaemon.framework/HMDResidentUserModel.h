/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUserModel.h>

@class NSString, HMDDevice, NSNumber;

@interface HMDResidentUserModel : HMDUserModel {

	NSString* _displayName;

}

@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) NSNumber * configState; 
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier; 
+(id)properties;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
@end

