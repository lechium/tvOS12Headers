/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager {

	unsigned long long _state;

}
+(id)_features;
+(Class)_relevanceProviderClass;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_updatePlaybackState;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(void)pause;
@end

