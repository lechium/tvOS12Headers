/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REConcurrentDictionary;

@interface REBundleCache : NSObject {

	REConcurrentDictionary* _cachedBundles;

}
+(id)sharedInstance;
-(id)bundleAtPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

