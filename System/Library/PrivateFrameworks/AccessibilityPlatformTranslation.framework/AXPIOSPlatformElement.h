/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAccessibilityElement.h>
#import <libobjc.A.dylib/AXPTranslationElementProtocol.h>

@class AXPTranslationObject, NSString;

@interface AXPIOSPlatformElement : UIAccessibilityElement <AXPTranslationElementProtocol> {

	AXPTranslationObject* translation;

}

@property (nonatomic,retain) AXPTranslationObject * translation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)platformElementWithTranslationObject:(id)arg1 ;
+(id)platformElementWithTranslationObject:(id)arg1 rootParent:(id)arg2 ;
-(AXPTranslationObject *)translation;
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
@end

