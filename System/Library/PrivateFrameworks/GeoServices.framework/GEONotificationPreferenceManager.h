/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {

	NSMutableDictionary* _enableFlags;

}
+(id)sharedManager;
-(BOOL)isEnabledForSubTestWithName:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSubTestWithName:(id)arg2 ;
-(id)init;
-(void)reset;
@end

