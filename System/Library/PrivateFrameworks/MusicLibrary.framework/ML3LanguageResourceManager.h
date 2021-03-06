/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ML3LanguageResources, NSObject;

@interface ML3LanguageResourceManager : NSObject {

	ML3LanguageResources* _cachedResources;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) ML3LanguageResources * cachedResources;                //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) ML3LanguageResources * resources; 
+(id)sharedResourceManager;
-(ML3LanguageResources *)resources;
-(void)invalidateCachedResources;
-(id)_buildLanguageResources;
-(ML3LanguageResources *)cachedResources;
-(void)setCachedResources:(ML3LanguageResources *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_init;
@end

