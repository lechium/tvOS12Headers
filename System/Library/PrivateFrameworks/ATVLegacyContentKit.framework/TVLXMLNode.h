/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class NSString, TVLXMLDocument, NSArray;

@interface TVLXMLNode : NSObject {

	xmlNode* _privateXmlNode;
	NSString* _clearedXMLString;

}

@property (readonly) NSString * name; 
@property (copy) NSString * textContent; 
@property (retain) id associatedObject; 
@property (readonly) TVLXMLDocument * ownerDocument; 
@property (readonly) TVLXMLNode * parent; 
@property (readonly) NSArray * childNodes; 
@property (readonly) TVLXMLNode * nextSibling; 
@property (readonly) TVLXMLNode * previousSibling; 
+(id)nodeWithXmlNode:(xmlNode*)arg1 ;
+(void)initialize;
-(NSString *)textContent;
-(void)setTextContent:(NSString *)arg1 ;
-(void)removeFromParent;
-(id)attributeValueForName:(id)arg1 ;
-(id)initWithXmlNode:(xmlNode*)arg1 ;
-(void)lockNode:(/*^block*/id)arg1 ;
-(id)_XMLString;
-(BOOL)_insertChild:(id)arg1 otherChild:(id)arg2 insertFunction:(/*function pointer*/void*)arg3 error:(id*)arg4 ;
-(id)domCloneNode:(BOOL)arg1 ;
-(id)nodesForXPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)appendChild:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertChild:(id)arg1 before:(id)arg2 error:(id*)arg3 ;
-(BOOL)insertChild:(id)arg1 after:(id)arg2 error:(id*)arg3 ;
-(BOOL)replaceChild:(id)arg1 with:(id)arg2 error:(id*)arg3 ;
-(BOOL)domReplaceChild:(id)arg1 with:(id)arg2 error:(id*)arg3 ;
-(BOOL)domRemoveChild:(id)arg1 error:(id*)arg2 ;
-(void)setAttributeValue:(id)arg1 forName:(id)arg2 ;
-(void)removeAttributeForName:(id)arg1 ;
-(BOOL)hasAttributeForName:(id)arg1 ;
-(void)setAssociatedObject:(id)arg1 ;
-(id)associatedObject;
-(id)domOwnerDocument;
-(id)domWriteToStringWithError:(id*)arg1 ;
-(void)clearNode;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVLXMLDocument *)ownerDocument;
-(TVLXMLNode *)parent;
-(NSArray *)childNodes;
-(TVLXMLNode *)nextSibling;
-(TVLXMLNode *)previousSibling;
@end

