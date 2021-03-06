/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finalize;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)didEnterTerminalState;
-(BOOL)isAsynchronous;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)start;
@end

