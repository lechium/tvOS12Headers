/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PFAdjustment : NSObject {

	BOOL _enabled;
	unsigned long long _formatVersion;
	NSString* _identifier;
	NSDictionary* _settings;
	NSString* _autoIdentifier;
	NSDictionary* _autoSettings;
	NSString* _maskUUID;

}

@property (nonatomic,readonly) unsigned long long formatVersion;              //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings;                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSString * autoIdentifier;                     //@synthesize autoIdentifier=_autoIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * autoSettings;                   //@synthesize autoSettings=_autoSettings - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSString * maskUUID;                           //@synthesize maskUUID=_maskUUID - In the implementation block
+(BOOL)isValidArchiveDictionary:(id)arg1 errors:(id)arg2 ;
-(unsigned long long)formatVersion;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(BOOL)arg5 maskUUID:(id)arg6 ;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(BOOL)arg3 ;
-(NSString *)autoIdentifier;
-(NSDictionary *)autoSettings;
-(NSString *)maskUUID;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(id)description;
-(id)debugDescription;
-(NSDictionary *)settings;
-(BOOL)enabled;
-(id)archiveDictionary;
@end

