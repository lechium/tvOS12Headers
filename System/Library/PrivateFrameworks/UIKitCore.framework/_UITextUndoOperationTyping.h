/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSUndoTextOperation.h>

@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : NSUndoTextOperation {

	NSRange _replacementRange;
	NSMutableAttributedString* _attributedString;

}
-(void)undoRedo;
-(BOOL)supportsCoalescing;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(BOOL)coalesceAffectedRange:(NSRange)arg1 replacementRange:(NSRange)arg2 selectedRange:(NSRange)arg3 textStorage:(id)arg4 ;
@end

