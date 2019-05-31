/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIKeyboardLayoutStarAccessibility_super.h>

@interface UIKeyboardLayoutStarAccessibility : __UIKeyboardLayoutStarAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)_accessibilityScannerGroupTraits;
-(id)_accessibilityScannerGroupElements;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityInternalData;
-(id)_accessibilityBiasEscapeButton;
-(id)_accessibilityCreateElementForKey:(id)arg1 ;
-(BOOL)_axIsWaitingForEmojiPopupAnnouncement;
-(id)_accessibilityStickyPopupKeys;
-(void)_axSetIsWaitingForEmojiPopupAnnouncement:(BOOL)arg1 ;
-(void)_accessibilitySetStickyPopupKeys:(id)arg1 ;
-(void)_axHandleEmojiPopupLayoutChangeAfterAnnouncement;
-(void)_accessibilityResetInternalData;
-(id)_accessibilitySortedUnstoredKeys;
-(id)_accessibilityKeys;
-(void)_axClearReturnKeyLabel;
-(id)_accessibilityKeyElementForKey:(id)arg1 ;
-(id)_axKBModalView;
-(BOOL)_accessibilityHasBiasEscapeButton;
-(BOOL)_accessibilityBiasEscapeButtonIsFirst;
-(id)atvGetKeyboardRowsByNumber;
-(id)_rowNumberOverrideForSplitEmojiKey:(id)arg1 ;
-(double)_axGetSortingNumberForEmojiCell:(id)arg1 ;
-(id)_accessibilityGetKeyboardRowsByRowNumber;
-(id)atvGetOrderedRowsForRows:(id)arg1 sortedRows:(id)arg2 numRows:(long long)arg3 ;
-(BOOL)_accessibilityFingerIsDown;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(id)_accessibilityKeyboardKeyForString:(id)arg1 ;
-(void)_accessibilityChangeToKeyplane:(id)arg1 ;
-(id)_accessibiltyAvailableKeyplanes;
-(id)_accessibilityVisibleKeysByRow;
-(BOOL)_isCapitalLetterKeyplane:(id)arg1 ;
-(BOOL)_isSmallLetterKeyplane:(id)arg1 ;
-(id)iOSGetKeyboardRowsByNumber;
-(id)iOSGetOrderedRowsForRows:(id)arg1 sortedRows:(id)arg2 numRows:(long long)arg3 ;
-(void)dealloc;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementsHidden;
-(long long)accessibilityNavigationStyle;
-(BOOL)accessibilityPerformEscape;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(void)setKeyplaneName:(id)arg1 ;
-(void)setActiveKey:(id)arg1 ;
-(BOOL)canProduceString:(id)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4 ;
@end

