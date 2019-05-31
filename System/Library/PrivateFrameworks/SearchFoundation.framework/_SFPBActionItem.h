/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBActionItem.h>
@class NSString, NSArray, _SFPBPunchout, NSData, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBURL;


@protocol _SFPBActionItem <NSObject>
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelForLocalMedia; 
@property (assign,nonatomic) BOOL isOverlay; 
@property (nonatomic,copy) NSArray * storeIdentifiers; 
@property (assign,nonatomic) BOOL requiresLocalMedia; 
@property (nonatomic,copy) NSString * localMediaIdentifier; 
@property (nonatomic,retain) _SFPBPunchout * punchout; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSData * mapsData; 
@property (nonatomic,retain) _SFPBGraphicalFloat * latitude; 
@property (nonatomic,retain) _SFPBGraphicalFloat * longitude; 
@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * offerType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * labelITunes; 
@property (assign,nonatomic) BOOL isITunes; 
@property (nonatomic,retain) _SFPBImage * icon; 
@property (nonatomic,retain) _SFPBImage * baseIcon; 
@property (nonatomic,retain) _SFPBLatLng * location; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@property (nonatomic,retain) _SFPBURL * messageURL; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSString *)provider;
-(void)setLatitude:(id)arg1;
-(void)setLongitude:(id)arg1;
-(_SFPBGraphicalFloat *)latitude;
-(_SFPBGraphicalFloat *)longitude;
-(void)setPhoneNumber:(id)arg1;
-(NSString *)phoneNumber;
-(void)setProvider:(id)arg1;
-(NSData *)mapsData;
-(_SFPBPunchout *)punchout;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(id)arg1;
-(void)setPunchout:(id)arg1;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(NSString *)email;
-(void)setEmail:(id)arg1;
-(void)addStoreIdentifiers:(id)arg1;
-(void)setLocalMediaIdentifier:(id)arg1;
-(NSString *)labelForLocalMedia;
-(BOOL)isOverlay;
-(BOOL)requiresLocalMedia;
-(NSString *)localMediaIdentifier;
-(NSString *)labelITunes;
-(BOOL)isITunes;
-(_SFPBImage *)baseIcon;
-(void)clearStoreIdentifiers;
-(unsigned long long)storeIdentifiersCount;
-(id)storeIdentifiersAtIndex:(unsigned long long)arg1;
-(void)setMapsData:(id)arg1;
-(NSString *)offerType;
-(_SFPBURL *)messageURL;
-(void)setMessageURL:(id)arg1;
-(void)setLabelForLocalMedia:(id)arg1;
-(void)setIsOverlay:(BOOL)arg1;
-(void)setRequiresLocalMedia:(BOOL)arg1;
-(void)setOfferType:(id)arg1;
-(void)setLabelITunes:(id)arg1;
-(void)setIsITunes:(BOOL)arg1;
-(void)setBaseIcon:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(NSArray *)storeIdentifiers;
-(void)setStoreIdentifiers:(id)arg1;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(id)arg1;
-(NSString *)applicationBundleIdentifier;
-(NSString *)type;
-(void)setType:(id)arg1;
-(_SFPBImage *)icon;
-(void)setIcon:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)label;
-(_SFPBLatLng *)location;
-(void)setLabel:(id)arg1;
-(void)setLocation:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, _SFPBPunchout, NSData, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBURL;

@interface _SFPBActionItem : PBCodable <_SFPBActionItem, NSSecureCoding> {

	BOOL _isOverlay;
	BOOL _requiresLocalMedia;
	BOOL _isITunes;
	NSString* _label;
	NSString* _labelForLocalMedia;
	NSArray* _storeIdentifiers;
	NSString* _localMediaIdentifier;
	_SFPBPunchout* _punchout;
	NSString* _applicationBundleIdentifier;
	NSString* _contactIdentifier;
	NSString* _phoneNumber;
	NSString* _email;
	NSData* _mapsData;
	_SFPBGraphicalFloat* _latitude;
	_SFPBGraphicalFloat* _longitude;
	NSString* _provider;
	NSString* _offerType;
	NSString* _type;
	NSString* _labelITunes;
	_SFPBImage* _icon;
	_SFPBImage* _baseIcon;
	_SFPBLatLng* _location;
	NSString* _messageIdentifier;
	_SFPBURL* _messageURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * labelForLocalMedia;                       //@synthesize labelForLocalMedia=_labelForLocalMedia - In the implementation block
@property (assign,nonatomic) BOOL isOverlay;                                    //@synthesize isOverlay=_isOverlay - In the implementation block
@property (nonatomic,copy) NSArray * storeIdentifiers;                          //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL requiresLocalMedia;                           //@synthesize requiresLocalMedia=_requiresLocalMedia - In the implementation block
@property (nonatomic,copy) NSString * localMediaIdentifier;                     //@synthesize localMediaIdentifier=_localMediaIdentifier - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * punchout;                          //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                        //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * email;                                    //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                                   //@synthesize mapsData=_mapsData - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * provider;                                 //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSString * offerType;                                //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,copy) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * labelITunes;                              //@synthesize labelITunes=_labelITunes - In the implementation block
@property (assign,nonatomic) BOOL isITunes;                                     //@synthesize isITunes=_isITunes - In the implementation block
@property (nonatomic,retain) _SFPBImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) _SFPBImage * baseIcon;                             //@synthesize baseIcon=_baseIcon - In the implementation block
@property (nonatomic,retain) _SFPBLatLng * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * messageIdentifier;                        //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,retain) _SFPBURL * messageURL;                             //@synthesize messageURL=_messageURL - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)provider;
-(void)setLatitude:(_SFPBGraphicalFloat *)arg1 ;
-(void)setLongitude:(_SFPBGraphicalFloat *)arg1 ;
-(_SFPBGraphicalFloat *)latitude;
-(_SFPBGraphicalFloat *)longitude;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setProvider:(NSString *)arg1 ;
-(NSData *)mapsData;
-(_SFPBPunchout *)punchout;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setPunchout:(_SFPBPunchout *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)addStoreIdentifiers:(id)arg1 ;
-(void)setLocalMediaIdentifier:(NSString *)arg1 ;
-(NSString *)labelForLocalMedia;
-(BOOL)isOverlay;
-(BOOL)requiresLocalMedia;
-(NSString *)localMediaIdentifier;
-(NSString *)labelITunes;
-(BOOL)isITunes;
-(_SFPBImage *)baseIcon;
-(void)clearStoreIdentifiers;
-(unsigned long long)storeIdentifiersCount;
-(id)storeIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setMapsData:(NSData *)arg1 ;
-(NSString *)offerType;
-(_SFPBURL *)messageURL;
-(void)setMessageURL:(_SFPBURL *)arg1 ;
-(void)setLabelForLocalMedia:(NSString *)arg1 ;
-(void)setIsOverlay:(BOOL)arg1 ;
-(void)setRequiresLocalMedia:(BOOL)arg1 ;
-(void)setOfferType:(NSString *)arg1 ;
-(void)setLabelITunes:(NSString *)arg1 ;
-(void)setIsITunes:(BOOL)arg1 ;
-(void)setBaseIcon:(_SFPBImage *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSArray *)storeIdentifiers;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(_SFPBImage *)icon;
-(void)setIcon:(_SFPBImage *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)label;
-(_SFPBLatLng *)location;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLocation:(_SFPBLatLng *)arg1 ;
-(id)dictionaryRepresentation;
@end

