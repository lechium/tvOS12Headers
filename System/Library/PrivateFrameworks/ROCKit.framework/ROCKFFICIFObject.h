/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ROCKit/ROCKit-Structs.h>
@class NSMethodSignature;

@interface ROCKFFICIFObject : NSObject {

	unsigned char _buffer[64];
	NSMethodSignature* _methodSignature;
	ffi_type* _argumentTypes;
	BOOL* _allocatedArgumentTypes;
	SCD_Struct_RO5* _cif;

}

@property (nonatomic,retain) NSMethodSignature * methodSignature;              //@synthesize methodSignature=_methodSignature - In the implementation block
@property (assign,nonatomic) SCD_Struct_RO0* cif;                              //@synthesize cif=_cif - In the implementation block
@property (assign,nonatomic) ffi_type* argumentTypes;                          //@synthesize argumentTypes=_argumentTypes - In the implementation block
@property (assign,nonatomic) BOOL* allocatedArgumentTypes;                     //@synthesize allocatedArgumentTypes=_allocatedArgumentTypes - In the implementation block
+(id)cifObjectWithMethodSignature:(id)arg1 ;
-(void)setMethodSignature:(NSMethodSignature *)arg1 ;
-(SCD_Struct_RO0*)cif;
-(ffi_type*)argumentTypes;
-(void)callWithFunctionPointer:(/*function pointer*/void*)arg1 returnPointer:(void*)arg2 argumentPointers:(void*)arg3 ;
-(void)setCif:(SCD_Struct_RO0*)arg1 ;
-(void)prepareClosure:(SCD_Struct_RO1*)arg1 functionPointer:(/*function pointer*/void*)arg2 userData:(void*)arg3 codeLocation:(/*function pointer*/void*)arg4 ;
-(void)setArgumentTypes:(ffi_type*)arg1 ;
-(void)setAllocatedArgumentTypes:(BOOL*)arg1 ;
-(BOOL*)allocatedArgumentTypes;
-(void)dealloc;
-(id)description;
-(NSMethodSignature *)methodSignature;
@end

