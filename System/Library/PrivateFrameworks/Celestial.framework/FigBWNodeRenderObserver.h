/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWNodeRenderDelegate.h>

@class BWNode, NSString;

@interface FigBWNodeRenderObserver : NSObject <BWNodeRenderDelegate> {

	BWNode* _node;
	/*^block*/id _willRenderSampleBufferHandler;
	/*^block*/id _formatDidBecomeLiveHandler;

}

@property (nonatomic,copy) id willRenderSampleBufferHandler;              //@synthesize willRenderSampleBufferHandler=_willRenderSampleBufferHandler - In the implementation block
@property (nonatomic,copy) id formatDidBecomeLiveHandler;                 //@synthesize formatDidBecomeLiveHandler=_formatDidBecomeLiveHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3 ;
-(id)initWithBWNode:(id)arg1 ;
-(void)setWillRenderSampleBufferHandler:(id)arg1 ;
-(void)setFormatDidBecomeLiveHandler:(id)arg1 ;
-(id)willRenderSampleBufferHandler;
-(id)formatDidBecomeLiveHandler;
-(void)dealloc;
@end

