/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/_CUIRawDataRendition.h>

@class CUIRenditionMetrics, NSMutableArray;

@interface _CUILayerStackRendition : _CUIRawDataRendition {

	CUIRenditionMetrics* _renditionMetrics;
	NSMutableArray* _layers;

}
-(id)layerReferences;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)dealloc;
-(id)metrics;
@end

