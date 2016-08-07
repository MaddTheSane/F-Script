/*   FSNumber.h Copyright (c) 1998-2009 Philippe Mougin.  */
/*   This software is open source. See the license.  */  

#import "FSNSObject.h"
#import "FSNSNumber.h"

@class FSArray;
@class NSString; 
@class FSBoolean;
@class FSBlock;
 
@interface FSNumber:NSNumber <NSCopying, NSCoding>
{ 
@public
  NSUInteger retainCount;
  double value;
}

//   USER METHODS

+ (id)new;

- (NSNumber *)abs;
- (NSNumber *)arcCos;
- (NSNumber *)arcCosh;
- (NSNumber *)arcSin;
- (NSNumber *)arcSinh;
- (NSNumber *)arcTan;
- (NSNumber *)arcTanh;
- (NSDate *)asDate;
- (FSBoolean *)between:(NSNumber *)inf and:(NSNumber *)sup;
- (NSNumber *)bitAnd:(NSNumber *)operand; 
- (NSNumber *)bitOr:(NSNumber *)operand; 
- (NSNumber *)bitXor:(NSNumber *)operand; 
- (NSNumber *)ceiling;
- (NSNumber *)clone __attribute__((deprecated));
- (NSNumber *)cos;
- (NSNumber *)cosh;
- (NSNumber *)erf;
- (NSNumber *)erfc; 
- (NSNumber *)exp;
- (NSNumber *)floor;
- (NSNumber *)fractionPart;
- (NSNumber *)integerPart;
- (NSNumber *)ln;
- (NSNumber *)log;
- (NSNumber *)max:(NSNumber *)operand;
- (NSNumber *)min:(NSNumber *)operand; 
- (NSNumber *)negated;
- (NSNumber *)operator_asterisk:(NSNumber *)operand ;
- (NSNumber *)operator_hyphen:(NSNumber *)operand;
- (NSPoint)operator_less_greater:(NSNumber *)operand;
- (NSNumber *)operator_plus:(id)operand;
- (NSNumber *)operator_slash:(NSNumber *)operand;
- (FSBoolean *)operator_equal:(id)operand;
- (FSBoolean *)operator_tilde_equal:(id)operand;
- (FSBoolean *)operator_greater:(NSNumber *)operand;
- (FSBoolean *)operator_greater_equal:(NSNumber *)operand;
- (FSBoolean *)operator_less:(id)operand;  
- (FSBoolean *)operator_less_equal:(NSNumber *)operand;
- (NSNumber *)raisedTo:(NSNumber *)operand;
- (NSNumber *)random;
- (NSNumber *)rem:(NSNumber *)operand;
- (NSNumber *)sign;
- (NSNumber *)sin;
- (NSNumber *)sinh;
- (NSNumber *)sqrt;
- (NSNumber *)tan;
- (NSNumber *)tanh;
- (NSNumber *)truncated;

//    SYSTEM METHODS 

+ (instancetype)numberWithDouble:(double)val;

- (id)copyWithZone:(NSZone *)zone;
- (double) doubleValue;
- (BOOL) hasFrac_bool DEPRECATED_ATTRIBUTE; // deprecated
//- (unsigned int) hash;
- (id) initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithChar:(char)val;
- (instancetype)initWithUnsignedChar:(unsigned char)val;
- (instancetype)initWithShort:(short)val;
- (instancetype)initWithUnsignedShort:(unsigned short)val;
- (instancetype)initWithInt:(int)val;
- (instancetype)initWithUnsignedInt:(unsigned int)val;
- (instancetype)initWithLong:(long)val;
- (instancetype)initWithUnsignedLong:(unsigned long)val;
- (instancetype)initWithLongLong:(long long)val;
- (instancetype)initWithUnsignedLongLong:(unsigned long long)val;
- (instancetype)initWithInteger:(NSInteger)val;
- (instancetype)initWithUnsignedInteger:(NSUInteger)val;
- (instancetype)initWithFloat:(float)val;
- (instancetype)initWithDouble:(double)val NS_DESIGNATED_INITIALIZER; // designated initializer
- (instancetype)initWithBool:(BOOL)val;
- (BOOL) isEqual:(id)anObject;

// NSValue Class cluster primitives methods.
- (void)getValue:(void *)buffer;
- (const char *)objCType; 

@end
