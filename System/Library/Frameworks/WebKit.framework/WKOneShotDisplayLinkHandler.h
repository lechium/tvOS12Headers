/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class CADisplayLink;

@interface WKOneShotDisplayLinkHandler : NSObject {

	RemoteLayerTreeDrawingAreaProxy* _drawingAreaProxy;
	CADisplayLink* _displayLink;

}
-(id)initWithDrawingAreaProxy:(RemoteLayerTreeDrawingAreaProxy*)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)schedule;
-(void)displayLinkFired:(id)arg1 ;
-(void)pause;
@end

