/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, MIPMultiverseIdentifier, MIPSmartPlaylistInfo;

@interface MIPPlaylist : PBCodable <NSCopying> {

	long long _authorStoreId;
	long long _cloudLastUpdateTime;
	long long _creationDateTime;
	long long _lastPlayedDateTime;
	long long _minRefreshInterval;
	long long _modificationDateTime;
	long long _storeId;
	NSString* _artworkId;
	NSString* _authorDisplayName;
	NSString* _authorHandle;
	NSString* _authorStoreURL;
	NSMutableArray* _childIdentifiers;
	NSString* _cloudGlobalId;
	NSString* _cloudUniversalLibraryId;
	NSString* _cloudVersionHash;
	int _distinguishedKind;
	NSString* _externalVendorDisplayName;
	NSString* _externalVendorIdentifier;
	NSString* _externalVendorTag;
	MIPMultiverseIdentifier* _geniusSeedTrackIdentifier;
	NSMutableArray* _items;
	int _likedState;
	NSString* _name;
	MIPMultiverseIdentifier* _parentIdentifier;
	int _playCount;
	NSString* _playlistDescription;
	int _remoteSourceType;
	NSString* _secondaryArtworkId;
	int _secondaryArtworkSourceType;
	MIPSmartPlaylistInfo* _smartPlaylistInfo;
	int _sortType;
	int _subscriberCount;
	int _subscriberLikedCount;
	int _subscriberPlayCount;
	NSString* _subscriberURL;
	int _type;
	BOOL _cloudIsCuratorPlaylist;
	BOOL _cloudIsSharingDisabled;
	BOOL _cloudIsSubscribed;
	BOOL _editable;
	BOOL _externalVendorPlaylist;
	BOOL _hidden;
	BOOL _owner;
	BOOL _reversedSorting;
	BOOL _shared;
	BOOL _visible;
	SCD_Struct_MI12 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                                                //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) BOOL hasSmartPlaylistInfo; 
@property (nonatomic,retain) MIPSmartPlaylistInfo * smartPlaylistInfo;                         //@synthesize smartPlaylistInfo=_smartPlaylistInfo - In the implementation block
@property (assign,nonatomic) BOOL hasSortType; 
@property (assign,nonatomic) int sortType;                                                     //@synthesize sortType=_sortType - In the implementation block
@property (assign,nonatomic) BOOL hasReversedSorting; 
@property (assign,nonatomic) BOOL reversedSorting;                                             //@synthesize reversedSorting=_reversedSorting - In the implementation block
@property (nonatomic,readonly) BOOL hasParentIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * parentIdentifier;                       //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasGeniusSeedTrackIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * geniusSeedTrackIdentifier;              //@synthesize geniusSeedTrackIdentifier=_geniusSeedTrackIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDistinguishedKind; 
@property (assign,nonatomic) int distinguishedKind;                                            //@synthesize distinguishedKind=_distinguishedKind - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudGlobalId; 
@property (nonatomic,retain) NSString * cloudGlobalId;                                         //@synthesize cloudGlobalId=_cloudGlobalId - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsSubscribed; 
@property (assign,nonatomic) BOOL cloudIsSubscribed;                                           //@synthesize cloudIsSubscribed=_cloudIsSubscribed - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsCuratorPlaylist; 
@property (assign,nonatomic) BOOL cloudIsCuratorPlaylist;                                      //@synthesize cloudIsCuratorPlaylist=_cloudIsCuratorPlaylist - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalVendorIdentifier; 
@property (nonatomic,retain) NSString * externalVendorIdentifier;                              //@synthesize externalVendorIdentifier=_externalVendorIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalVendorDisplayName; 
@property (nonatomic,retain) NSString * externalVendorDisplayName;                             //@synthesize externalVendorDisplayName=_externalVendorDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalVendorTag; 
@property (nonatomic,retain) NSString * externalVendorTag;                                     //@synthesize externalVendorTag=_externalVendorTag - In the implementation block
@property (assign,nonatomic) BOOL hasExternalVendorPlaylist; 
@property (assign,nonatomic) BOOL externalVendorPlaylist;                                      //@synthesize externalVendorPlaylist=_externalVendorPlaylist - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDateTime; 
@property (assign,nonatomic) long long creationDateTime;                                       //@synthesize creationDateTime=_creationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDateTime; 
@property (assign,nonatomic) long long modificationDateTime;                                   //@synthesize modificationDateTime=_modificationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasLastPlayedDateTime; 
@property (assign,nonatomic) long long lastPlayedDateTime;                                     //@synthesize lastPlayedDateTime=_lastPlayedDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIsSharingDisabled; 
@property (assign,nonatomic) BOOL cloudIsSharingDisabled;                                      //@synthesize cloudIsSharingDisabled=_cloudIsSharingDisabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudVersionHash; 
@property (nonatomic,retain) NSString * cloudVersionHash;                                      //@synthesize cloudVersionHash=_cloudVersionHash - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                                             //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) BOOL hasLikedState; 
@property (assign,nonatomic) int likedState;                                                   //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteSourceType; 
@property (assign,nonatomic) int remoteSourceType;                                             //@synthesize remoteSourceType=_remoteSourceType - In the implementation block
@property (assign,nonatomic) BOOL hasOwner; 
@property (assign,nonatomic) BOOL owner;                                                       //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) BOOL hasEditable; 
@property (assign,nonatomic) BOOL editable;                                                    //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCount; 
@property (assign,nonatomic) int playCount;                                                    //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared;                                                      //@synthesize shared=_shared - In the implementation block
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible;                                                     //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorStoreId; 
@property (assign,nonatomic) long long authorStoreId;                                          //@synthesize authorStoreId=_authorStoreId - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthorDisplayName; 
@property (nonatomic,retain) NSString * authorDisplayName;                                     //@synthesize authorDisplayName=_authorDisplayName - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthorStoreURL; 
@property (nonatomic,retain) NSString * authorStoreURL;                                        //@synthesize authorStoreURL=_authorStoreURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthorHandle; 
@property (nonatomic,retain) NSString * authorHandle;                                          //@synthesize authorHandle=_authorHandle - In the implementation block
@property (assign,nonatomic) BOOL hasMinRefreshInterval; 
@property (assign,nonatomic) long long minRefreshInterval;                                     //@synthesize minRefreshInterval=_minRefreshInterval - In the implementation block
@property (assign,nonatomic) BOOL hasCloudLastUpdateTime; 
@property (assign,nonatomic) long long cloudLastUpdateTime;                                    //@synthesize cloudLastUpdateTime=_cloudLastUpdateTime - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriberCount; 
@property (assign,nonatomic) int subscriberCount;                                              //@synthesize subscriberCount=_subscriberCount - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriberPlayCount; 
@property (assign,nonatomic) int subscriberPlayCount;                                          //@synthesize subscriberPlayCount=_subscriberPlayCount - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriberLikedCount; 
@property (assign,nonatomic) int subscriberLikedCount;                                         //@synthesize subscriberLikedCount=_subscriberLikedCount - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscriberURL; 
@property (nonatomic,retain) NSString * subscriberURL;                                         //@synthesize subscriberURL=_subscriberURL - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaylistDescription; 
@property (nonatomic,retain) NSString * playlistDescription;                                   //@synthesize playlistDescription=_playlistDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryId; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryId;                               //@synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryArtworkSourceType; 
@property (assign,nonatomic) int secondaryArtworkSourceType;                                   //@synthesize secondaryArtworkSourceType=_secondaryArtworkSourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondaryArtworkId; 
@property (nonatomic,retain) NSString * secondaryArtworkId;                                    //@synthesize secondaryArtworkId=_secondaryArtworkId - In the implementation block
@property (nonatomic,retain) NSMutableArray * childIdentifiers;                                //@synthesize childIdentifiers=_childIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                           //@synthesize items=_items - In the implementation block
+(Class)childIdentifiersType;
+(Class)itemsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasHidden:(BOOL)arg1 ;
-(BOOL)hasHidden;
-(void)setShared:(BOOL)arg1 ;
-(void)setHasShared:(BOOL)arg1 ;
-(BOOL)hasShared;
-(BOOL)shared;
-(void)clearItems;
-(void)setHasVisible:(BOOL)arg1 ;
-(BOOL)hasVisible;
-(BOOL)hasSortType;
-(int)sortType;
-(void)setSortType:(int)arg1 ;
-(void)setHasSortType:(BOOL)arg1 ;
-(id)sortTypeAsString:(int)arg1 ;
-(int)StringAsSortType:(id)arg1 ;
-(void)setHasPlayCount:(BOOL)arg1 ;
-(BOOL)hasPlayCount;
-(void)setStoreId:(long long)arg1 ;
-(void)setPlayCount:(int)arg1 ;
-(MIPMultiverseIdentifier *)parentIdentifier;
-(void)setParentIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setHasStoreId:(BOOL)arg1 ;
-(void)addChildIdentifiers:(id)arg1 ;
-(void)setSmartPlaylistInfo:(MIPSmartPlaylistInfo *)arg1 ;
-(void)setGeniusSeedTrackIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setCloudGlobalId:(NSString *)arg1 ;
-(void)setExternalVendorIdentifier:(NSString *)arg1 ;
-(void)setExternalVendorDisplayName:(NSString *)arg1 ;
-(void)setExternalVendorTag:(NSString *)arg1 ;
-(void)setArtworkId:(NSString *)arg1 ;
-(void)setAuthorStoreURL:(NSString *)arg1 ;
-(void)setAuthorHandle:(NSString *)arg1 ;
-(void)setSubscriberURL:(NSString *)arg1 ;
-(void)setCloudUniversalLibraryId:(NSString *)arg1 ;
-(void)setSecondaryArtworkId:(NSString *)arg1 ;
-(unsigned long long)childIdentifiersCount;
-(void)clearChildIdentifiers;
-(id)childIdentifiersAtIndex:(unsigned long long)arg1 ;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSmartPlaylistInfo;
-(void)setReversedSorting:(BOOL)arg1 ;
-(void)setHasReversedSorting:(BOOL)arg1 ;
-(BOOL)hasReversedSorting;
-(BOOL)hasGeniusSeedTrackIdentifier;
-(void)setDistinguishedKind:(int)arg1 ;
-(void)setHasDistinguishedKind:(BOOL)arg1 ;
-(BOOL)hasDistinguishedKind;
-(BOOL)hasCloudGlobalId;
-(void)setCloudIsSubscribed:(BOOL)arg1 ;
-(void)setHasCloudIsSubscribed:(BOOL)arg1 ;
-(BOOL)hasCloudIsSubscribed;
-(void)setCloudIsCuratorPlaylist:(BOOL)arg1 ;
-(void)setHasCloudIsCuratorPlaylist:(BOOL)arg1 ;
-(BOOL)hasCloudIsCuratorPlaylist;
-(BOOL)hasExternalVendorIdentifier;
-(BOOL)hasExternalVendorDisplayName;
-(BOOL)hasExternalVendorTag;
-(void)setExternalVendorPlaylist:(BOOL)arg1 ;
-(void)setHasExternalVendorPlaylist:(BOOL)arg1 ;
-(BOOL)hasExternalVendorPlaylist;
-(void)setCreationDateTime:(long long)arg1 ;
-(void)setHasCreationDateTime:(BOOL)arg1 ;
-(BOOL)hasCreationDateTime;
-(void)setModificationDateTime:(long long)arg1 ;
-(void)setHasModificationDateTime:(BOOL)arg1 ;
-(BOOL)hasModificationDateTime;
-(void)setLastPlayedDateTime:(long long)arg1 ;
-(void)setHasLastPlayedDateTime:(BOOL)arg1 ;
-(BOOL)hasLastPlayedDateTime;
-(void)setCloudIsSharingDisabled:(BOOL)arg1 ;
-(void)setHasCloudIsSharingDisabled:(BOOL)arg1 ;
-(BOOL)hasCloudIsSharingDisabled;
-(BOOL)hasCloudVersionHash;
-(BOOL)hasArtworkId;
-(void)setHasLikedState:(BOOL)arg1 ;
-(BOOL)hasLikedState;
-(void)setRemoteSourceType:(int)arg1 ;
-(void)setHasRemoteSourceType:(BOOL)arg1 ;
-(BOOL)hasRemoteSourceType;
-(void)setHasEditable:(BOOL)arg1 ;
-(BOOL)hasEditable;
-(void)setAuthorStoreId:(long long)arg1 ;
-(void)setHasAuthorStoreId:(BOOL)arg1 ;
-(BOOL)hasAuthorStoreId;
-(BOOL)hasAuthorDisplayName;
-(BOOL)hasAuthorStoreURL;
-(BOOL)hasAuthorHandle;
-(void)setMinRefreshInterval:(long long)arg1 ;
-(void)setHasMinRefreshInterval:(BOOL)arg1 ;
-(BOOL)hasMinRefreshInterval;
-(void)setCloudLastUpdateTime:(long long)arg1 ;
-(void)setHasCloudLastUpdateTime:(BOOL)arg1 ;
-(BOOL)hasCloudLastUpdateTime;
-(void)setSubscriberCount:(int)arg1 ;
-(void)setHasSubscriberCount:(BOOL)arg1 ;
-(BOOL)hasSubscriberCount;
-(void)setSubscriberPlayCount:(int)arg1 ;
-(void)setHasSubscriberPlayCount:(BOOL)arg1 ;
-(BOOL)hasSubscriberPlayCount;
-(void)setSubscriberLikedCount:(int)arg1 ;
-(void)setHasSubscriberLikedCount:(BOOL)arg1 ;
-(BOOL)hasSubscriberLikedCount;
-(BOOL)hasSubscriberURL;
-(BOOL)hasPlaylistDescription;
-(void)setSecondaryArtworkSourceType:(int)arg1 ;
-(void)setHasSecondaryArtworkSourceType:(BOOL)arg1 ;
-(BOOL)hasSecondaryArtworkSourceType;
-(BOOL)hasSecondaryArtworkId;
-(MIPSmartPlaylistInfo *)smartPlaylistInfo;
-(BOOL)reversedSorting;
-(MIPMultiverseIdentifier *)geniusSeedTrackIdentifier;
-(int)distinguishedKind;
-(NSString *)cloudGlobalId;
-(BOOL)cloudIsSubscribed;
-(BOOL)cloudIsCuratorPlaylist;
-(NSString *)externalVendorIdentifier;
-(NSString *)externalVendorDisplayName;
-(NSString *)externalVendorTag;
-(BOOL)externalVendorPlaylist;
-(long long)creationDateTime;
-(long long)modificationDateTime;
-(long long)lastPlayedDateTime;
-(BOOL)cloudIsSharingDisabled;
-(NSString *)artworkId;
-(int)remoteSourceType;
-(long long)authorStoreId;
-(NSString *)authorStoreURL;
-(NSString *)authorHandle;
-(long long)minRefreshInterval;
-(long long)cloudLastUpdateTime;
-(int)subscriberCount;
-(int)subscriberPlayCount;
-(int)subscriberLikedCount;
-(NSString *)subscriberURL;
-(int)secondaryArtworkSourceType;
-(NSString *)secondaryArtworkId;
-(NSMutableArray *)childIdentifiers;
-(void)setChildIdentifiers:(NSMutableArray *)arg1 ;
-(int)likedState;
-(void)setLikedState:(int)arg1 ;
-(BOOL)hasCloudUniversalLibraryId;
-(NSString *)cloudUniversalLibraryId;
-(BOOL)hasStoreId;
-(long long)storeId;
-(NSString *)authorDisplayName;
-(void)setAuthorDisplayName:(NSString *)arg1 ;
-(void)setCloudVersionHash:(NSString *)arg1 ;
-(NSString *)playlistDescription;
-(void)setPlaylistDescription:(NSString *)arg1 ;
-(int)playCount;
-(NSString *)cloudVersionHash;
-(void)setHasOwner:(BOOL)arg1 ;
-(BOOL)hasOwner;
-(BOOL)hasParentIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(unsigned long long)itemsCount;
-(void)setEditable:(BOOL)arg1 ;
-(BOOL)visible;
-(void)copyTo:(id)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)owner;
-(void)setOwner:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)addItems:(id)arg1 ;
-(BOOL)hidden;
-(BOOL)editable;
@end

