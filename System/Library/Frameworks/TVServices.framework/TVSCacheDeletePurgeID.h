/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <TVServices/TVServices-Structs.h>
@class NSObject;

@interface TVSCacheDeletePurgeID : NSObject {

	CacheDeleteTokenRef _token;
	NSObject*<OS_dispatch_semaphore> _tokenSemaphore;

}

@property (assign,nonatomic) CacheDeleteTokenRef token; 
-(id)_init;
-(CacheDeleteTokenRef)token;
-(void)setToken:(CacheDeleteTokenRef)arg1 ;
@end

