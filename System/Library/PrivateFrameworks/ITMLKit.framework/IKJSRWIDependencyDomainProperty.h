/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IKJSRWIDependencyDomainType, IKJSRWIDependencyDomain;

@interface IKJSRWIDependencyDomainProperty : NSObject {

	NSString* _reference;
	BOOL _required;
	NSString* _name;
	NSString* _purpose;
	NSString* _propertyType;
	IKJSRWIDependencyDomainType* _domainType;
	IKJSRWIDependencyDomain* _domain;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                           //@synthesize purpose=_purpose - In the implementation block
@property (getter=isRequired,nonatomic,readonly) BOOL required;                              //@synthesize required=_required - In the implementation block
@property (nonatomic,readonly) NSString * propertyType;                                      //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomainType * domainType;              //@synthesize domainType=_domainType - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomain * domain;                      //@synthesize domain=_domain - In the implementation block
+(id)propertyNameMapping;
+(id)typeMapping;
-(NSString *)propertyType;
-(IKJSRWIDependencyDomainType *)domainType;
-(NSString *)purpose;
-(id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2 ;
-(id)initWithPropertyDictionary:(id)arg1 forDomain:(id)arg2 ;
-(id)propertyDefinitionString;
-(id)methodParameterString;
-(BOOL)isRequired;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(NSString *)name;
-(IKJSRWIDependencyDomain *)domain;
@end
