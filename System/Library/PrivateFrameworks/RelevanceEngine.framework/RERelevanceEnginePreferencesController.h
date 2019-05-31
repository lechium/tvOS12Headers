/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RERelevanceEnginePreferencesDelegate.h>

@class NSMapTable, RERelevanceEnginePreferences, NSString;

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate> {

	NSMapTable* _preferences;
	RERelevanceEnginePreferences* _effectivePreferences;

}

@property (nonatomic,readonly) RERelevanceEnginePreferences * effectivePreferences; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RERelevanceEnginePreferences *)effectivePreferences;
-(void)setPreferences:(id)arg1 forObject:(id)arg2 ;
-(void)removePreferencesForObject:(id)arg1 ;
-(void)relevanceEnginePreferencesDidUpdate:(id)arg1 ;
-(void)_resetEffectivePreferences;
-(id)init;
@end
