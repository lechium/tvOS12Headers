/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, UIImage, NSString;

@interface UIAccessibilityCustomAction : NSObject {

	NSAttributedString* _attributedName;
	id _target;
	SEL _selector;

}

@property (setter=_setImage:,getter=_image,nonatomic,retain) UIImage * image; 
@property (setter=_setShortName:,getter=_shortName,nonatomic,retain) NSString * shortName; 
@property (assign,nonatomic) BOOL shouldSuppressActionHint; 
@property (setter=_accessibilitySetInternalCustomActionIdentifier:,getter=_accessibilityInternalCustomActionIdentifier,nonatomic,retain) NSString * internalCustomActionIdentifier; 
@property (assign,nonatomic) BOOL ignoreWhenVoiceOverTouches; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSAttributedString * attributedName;                                                                                                                                  //@synthesize attributedName=_attributedName - In the implementation block
@property (assign,nonatomic,__weak) id target;                                                                                                                                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                                                                                                                                       //@synthesize selector=_selector - In the implementation block
-(id)_accessibilityAXAttributedName;
-(id)_accessibilityInternalCustomActionIdentifier;
-(id)_accessibilityCustomActionIdentifier;
-(id)_shortName;
-(void)_setShortName:(id)arg1 ;
-(void)_accessibilitySetInternalCustomActionIdentifier:(id)arg1 ;
-(BOOL)shouldSuppressActionHint;
-(void)setShouldSuppressActionHint:(BOOL)arg1 ;
-(BOOL)ignoreWhenVoiceOverTouches;
-(void)setIgnoreWhenVoiceOverTouches:(BOOL)arg1 ;
-(BOOL)_accessibilityMatchesCustomActionIdentifier:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(id)_image;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedName;
-(id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)target;
-(SEL)selector;
@end
