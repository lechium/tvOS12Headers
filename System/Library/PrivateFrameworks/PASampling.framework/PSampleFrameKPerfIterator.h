/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleFrameIterator.h>

@class PASampleKernelFrame, PASampleUserFrame, NSString;

@interface PSampleFrameKPerfIterator : NSObject <PASampleFrameIterator> {

	PASampleKernelFrame* _kernel;
	PASampleUserFrame* _user;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;
	const unsigned long long* userFrames;
	int numUserFrames;
	const unsigned long long* kernelFrames;
	int numKernelFrames;
	unsigned long long continuation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(BOOL)hasUserStack;
-(BOOL)hasKernelStack;
-(void)clear;
@end

