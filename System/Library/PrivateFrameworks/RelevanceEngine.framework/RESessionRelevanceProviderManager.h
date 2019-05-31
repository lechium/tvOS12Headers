/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSDate;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager {

	NSDate* _lastDateUpdate;

}
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_supportsHistoricProviders;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(void)_prepareForUpdate;
-(void)_handleSignificantTimeChange;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(float)_relevanceForHistoricProvider:(id)arg1 ;
-(void)_addedProvider:(id)arg1 ;
-(void)_openDataStoresAndObserveChanges;
-(void)_closeDataStoresAndObserveChanges;
-(float)_relevanceForProvider:(id)arg1 ;
-(void)_scheduleUpdatesForSessionProvider:(id)arg1 ;
@end

