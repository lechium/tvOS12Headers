/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSMutableArray;

@interface FigCaptionLayerPrivate : NSObject {

	OpaqueFigCFCaptionRendererRef renderer;
	NSMutableArray* captionElementLayers;
	OpaqueFigSimpleMutexRef renderMutex;
	OpaqueFigReentrantMutexRef layoutSublayersMutex;
	unsigned char shouldDrawGrid;
	NSMutableArray* captionBackdropLayers;
	unsigned char enableBackdrop;

}
@end

