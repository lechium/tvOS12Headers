/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSData, NSNumber;

@interface HMDEventTriggerModel : HMDTriggerModel

@property (nonatomic,retain) NSData * evaluationCondition; 
@property (nonatomic,retain) NSData * recurrences; 
@property (nonatomic,retain) NSNumber * executeOnce; 
+(id)properties;
-(id)createPayload;
@end

