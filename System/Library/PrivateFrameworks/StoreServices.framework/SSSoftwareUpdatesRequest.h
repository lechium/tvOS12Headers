/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;

@interface SSSoftwareUpdatesRequest : SSRequest {

	SSSoftwareUpdatesContext* _context;

}

@property (assign,nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate; 
@property (readonly) SSSoftwareUpdatesContext * updateQueueContext; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithUpdatesResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithUpdateQueueContext:(id)arg1 ;
-(SSSoftwareUpdatesContext *)updateQueueContext;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)start;
@end
