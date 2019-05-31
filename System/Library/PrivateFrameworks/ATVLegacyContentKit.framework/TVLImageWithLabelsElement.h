/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLImageElement, NSArray;

@interface TVLImageWithLabelsElement : TVLElement {

	TVLImageElement* _image;
	NSArray* _labels;

}

@property (nonatomic,retain) TVLImageElement * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * labels;                       //@synthesize labels=_labels - In the implementation block
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImage:(TVLImageElement *)arg1 ;
-(TVLImageElement *)image;
@end

