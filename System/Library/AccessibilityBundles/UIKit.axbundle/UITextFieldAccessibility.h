/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : __UITextFieldAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(NSRange)_accessibilitySelectedTextRange;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityResponderElement;
-(id)_accessibilityNativeFocusPreferredElement;
-(BOOL)_accessibilityOverridesLabelValueHintSelector:(SEL)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1 ;
-(id)_accessibilityInternalFakeTextField:(BOOL)arg1 ;
-(id)_accessibilityInternalFakeTextField;
-(BOOL)_axTextFieldIsHidden;
-(id)_accessibilityLeftButtons;
-(id)_accessibilityRightButtons;
-(id)_accessibilityPlaceholderValue:(BOOL)arg1 ;
-(id)_accessibilityTextFieldText;
-(id)_accessibilityGetValue;
-(long long)_accessibilityCountAccessibleChildren:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementIsFocused;
-(id)accessibilityElements;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
@end

