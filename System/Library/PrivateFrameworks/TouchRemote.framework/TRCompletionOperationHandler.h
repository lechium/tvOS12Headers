/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRCompletionOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleCompletionRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

