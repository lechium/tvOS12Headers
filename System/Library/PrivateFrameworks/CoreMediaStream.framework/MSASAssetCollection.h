/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary, NSDate;

@interface MSASAssetCollection : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasComments;
	BOOL _isDeletable;
	BOOL _isMine;
	NSString* _GUID;
	NSString* _ctag;
	NSString* _albumGUID;
	NSArray* _assets;
	NSString* _fileName;
	NSString* _path;
	id _userInfo;
	NSDictionary* _metadata;
	long long _photoNumber;
	NSDate* _timestamp;
	NSString* _personID;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSArray * assets;                        //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id userInfo;                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) long long photoNumber;                   //@synthesize photoNumber=_photoNumber - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) BOOL hasComments;                        //@synthesize hasComments=_hasComments - In the implementation block
+(id)assetCollectionWithAssetCollection:(id)arg1 ;
+(id)MSASPAssetCollectionFromProtocolDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)fileName;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(BOOL)hasComments;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(long long)photoNumber;
-(void)setPhotoNumber:(long long)arg1 ;
-(BOOL)hasVideoAsset;
-(id)initWithFileName:(id)arg1 path:(id)arg2 ;
-(BOOL)isAutoloopVideo;
-(void)setHasComments:(BOOL)arg1 ;
-(id)MSASPProtocolDictionary;
-(NSString *)fullName;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)email;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setFileName:(NSString *)arg1 ;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setIsMine:(BOOL)arg1 ;
-(id)mediaAssetType;
-(NSString *)albumGUID;
-(BOOL)isDeletable;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSArray *)assets;
-(BOOL)isMine;
-(NSString *)firstName;
-(void)setAssets:(NSArray *)arg1 ;
-(BOOL)isPhotoIris;
-(NSString *)lastName;
-(BOOL)isEqual:(id)arg1 ;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isVideo;
@end
