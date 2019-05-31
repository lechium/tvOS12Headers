/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPPropertySet;

@interface MPStoreModelObjectBuilder : NSObject {

	BOOL _preventStoreItemMetadataCaching;
	MPPropertySet* _requestedPropertySet;

}

@property (nonatomic,readonly) MPPropertySet * requestedPropertySet;              //@synthesize requestedPropertySet=_requestedPropertySet - In the implementation block
@property (assign,nonatomic) BOOL preventStoreItemMetadataCaching;                //@synthesize preventStoreItemMetadataCaching=_preventStoreItemMetadataCaching - In the implementation block
+(id)allSupportedProperties;
-(id)initWithRequestedPropertySet:(id)arg1 ;
-(MPPropertySet *)requestedPropertySet;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
-(BOOL)preventStoreItemMetadataCaching;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 ;
-(id)modelObjectWithStorePlatformDictionary:(id)arg1 ;
-(void)setPreventStoreItemMetadataCaching:(BOOL)arg1 ;
@end
