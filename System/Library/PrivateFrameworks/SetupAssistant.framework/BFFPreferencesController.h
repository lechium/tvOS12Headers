/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BFFPreferencesController : NSObject {

	NSMutableDictionary* _preferences;

}
+(id)buddyPreferences;
-(void)persist;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)reset;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
@end

