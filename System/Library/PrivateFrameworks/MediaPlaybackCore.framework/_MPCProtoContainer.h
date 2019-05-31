/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoContainerIdentifierSet, NSMutableArray, NSString;

@interface _MPCProtoContainer : PBCodable <NSCopying> {

	int _containerType;
	_MPCProtoContainerIdentifierSet* _identifierSet;
	NSMutableArray* _items;
	NSString* _playActivityFeatureName;
	SCD_Struct_MP14 _has;

}

@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                                            //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifierSet; 
@property (nonatomic,retain) _MPCProtoContainerIdentifierSet * identifierSet;              //@synthesize identifierSet=_identifierSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayActivityFeatureName; 
@property (nonatomic,retain) NSString * playActivityFeatureName;                           //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
+(Class)itemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearItems;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(int)containerType;
-(BOOL)hasContainerType;
-(void)setContainerType:(int)arg1 ;
-(void)setHasContainerType:(BOOL)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(_MPCProtoContainerIdentifierSet *)identifierSet;
-(void)setIdentifierSet:(_MPCProtoContainerIdentifierSet *)arg1 ;
-(BOOL)hasIdentifierSet;
-(BOOL)hasPlayActivityFeatureName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(unsigned long long)itemsCount;
-(id)dictionaryRepresentation;
@end

