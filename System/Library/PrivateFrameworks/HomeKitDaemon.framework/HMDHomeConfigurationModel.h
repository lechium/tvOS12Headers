/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject {

	BOOL _homeHasLocalChanges;

}

@property (nonatomic,retain) NSNumber * configurationVersion; 
@property (assign,nonatomic) BOOL homeHasLocalChanges;                     //@synthesize homeHasLocalChanges=_homeHasLocalChanges - In the implementation block
+(id)properties;
-(BOOL)homeHasLocalChanges;
-(void)setHomeHasLocalChanges:(BOOL)arg1 ;
@end

