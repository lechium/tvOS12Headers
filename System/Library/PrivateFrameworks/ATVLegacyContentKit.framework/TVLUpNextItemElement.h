/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLVideoAssetElement;

@interface TVLUpNextItemElement : TVLElement {

	TVLVideoAssetElement* _videoAsset;

}

@property (nonatomic,retain) TVLVideoAssetElement * videoAsset;              //@synthesize videoAsset=_videoAsset - In the implementation block
-(TVLVideoAssetElement *)videoAsset;
-(void)setVideoAsset:(TVLVideoAssetElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

