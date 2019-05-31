/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <TVServices/TVJSContentIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVContentIdentifier : NSObject <TVJSContentIdentifier, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	TVContentIdentifier* _container;

}

@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) TVContentIdentifier * container; 
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) TVContentIdentifier * container;              //@synthesize container=_container - In the implementation block
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)_dictionaryFromIdentifier:(id)arg1 ;
+(id)_identifierFromDictionary:(id)arg1 ;
+(id)contentIdentifierWithContentIdentifier:(id)arg1 ;
+(id)_contentIdentifierWithFlattenedRepresentation:(id)arg1 rootContainer:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)readableTypeIdentifiersForItemProvider;
-(OpaqueJSValueRef)jsCopyObjectWithContext:(OpaqueJSContextRef)arg1 withException:(const OpaqueJSValue*)arg2 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isTVContentIdentifier__;
-(id)_flattenedRepresentation;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVContentIdentifier *)container;
@end

