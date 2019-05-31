/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLSessionTaskMetrics, NSString;

@interface VaryHeaderSupportTaskDelegate : NSObject <NSURLSessionTaskDelegate> {

	NSURLSessionTaskMetrics* _metrics;

}

@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)dealloc;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
-(NSURLSessionTaskMetrics *)metrics;
@end
