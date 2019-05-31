/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPNondurableMediaItem.h>

@class NSDictionary, MPModelObject;

@interface MPModelObjectMediaItem : MPNondurableMediaItem {

	NSDictionary* _propertyValues;
	MPModelObject* _modelObject;

}

@property (nonatomic,readonly) MPModelObject * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)valuesForProperties:(id)arg1 ;
-(id)_initWithPropertyValues:(id)arg1 ;
-(MPModelObject *)modelObject;
-(id)initWithModelObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)valueForProperty:(id)arg1 ;
@end

