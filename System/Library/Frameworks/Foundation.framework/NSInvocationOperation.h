/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSInvocation;

@interface NSInvocationOperation : NSOperation {

	id _inv;
	id _exception;
	void* _reserved2;

}

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) id result; 
-(id)init;
-(void)dealloc;
-(void)main;
-(id)result;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(NSInvocation *)invocation;
-(id)initWithInvocation:(id)arg1 ;
@end
