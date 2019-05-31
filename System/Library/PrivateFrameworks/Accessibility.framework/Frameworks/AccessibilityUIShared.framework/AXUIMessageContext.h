/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIShared.framework/AccessibilityUIShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, AXAccessQueue;

@interface AXUIMessageContext : NSObject {

	BOOL _completionRequiresWritingBlock;
	NSObject*<OS_xpc_object> _xpcMessage;
	void* _context;
	AXAccessQueue* _targetAccessQueue;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (assign,nonatomic) void* context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AXAccessQueue * targetAccessQueue;                //@synthesize targetAccessQueue=_targetAccessQueue - In the implementation block
@property (assign,nonatomic) BOOL completionRequiresWritingBlock;              //@synthesize completionRequiresWritingBlock=_completionRequiresWritingBlock - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(AXAccessQueue *)targetAccessQueue;
-(void)setTargetAccessQueue:(AXAccessQueue *)arg1 ;
-(BOOL)completionRequiresWritingBlock;
-(void)setCompletionRequiresWritingBlock:(BOOL)arg1 ;
-(void)setContext:(void*)arg1 ;
-(void*)context;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

