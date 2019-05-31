/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface CEMPayloadBase : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _unknownPayloadKeys;

}

@property (copy,readonly) NSSet * unknownPayloadKeys;              //@synthesize unknownPayloadKeys=_unknownPayloadKeys - In the implementation block
+(id)load:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)loadStringFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(id)loadBooleanFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(id)loadIntegerFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(void)serializeStringIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeBooleanIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeIntegerIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeAssetIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 assetProvider:(id)arg4 transformType:(id)arg5 isRequired:(BOOL)arg6 defaultValue:(id)arg7 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(id)serializePayload;
-(id)loadDictionaryFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(void)serializeDictionaryIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 dictSerializer:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 classType:(Class)arg3 nested:(BOOL)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 error:(id*)arg7 ;
-(void)serializeArrayIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 itemSerializer:(/*^block*/id)arg4 isRequired:(BOOL)arg5 defaultValue:(id)arg6 ;
-(id)loadArrayFromDictionary:(id)arg1 withKey:(id)arg2 validator:(/*^block*/id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(id)loadDataFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(void)serializeDataIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(id)loadDateFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(id)loadFloatFromDictionary:(id)arg1 withKey:(id)arg2 isRequired:(BOOL)arg3 defaultValue:(id)arg4 error:(id*)arg5 ;
-(void)serializeDateIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(void)serializeFloatIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 ;
-(NSSet *)unknownPayloadKeys;
-(void)mergeUnknownKeysFrom:(id)arg1 withParentKey:(id)arg2 ;
-(id)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 withKey:(id)arg3 isRequired:(BOOL)arg4 defaultValue:(id)arg5 error:(id*)arg6 ;
-(id)createNestedObjectWithClass:(Class)arg1 withParentKey:(id)arg2 withPayload:(id)arg3 error:(id*)arg4 ;
-(void)_serializeItemIntoDictionary:(id)arg1 withKey:(id)arg2 withValue:(id)arg3 isRequired:(BOOL)arg4 isDefaultValue:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

