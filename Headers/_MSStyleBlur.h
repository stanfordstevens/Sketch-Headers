//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStylePart.h"

@interface _MSStyleBlur : MSStylePart
{
    double _motionAngle;
    double _radius;
    unsigned long long _type;
    struct CGPoint _center;
}

+ (Class)immutableClass;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double motionAngle; // @synthesize motionAngle=_motionAngle;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveType:(unsigned long long)arg1;
- (unsigned long long)primitiveType;
- (void)setPrimitiveRadius:(double)arg1;
- (double)primitiveRadius;
- (void)setPrimitiveMotionAngle:(double)arg1;
- (double)primitiveMotionAngle;
- (void)setPrimitiveCenter:(struct CGPoint)arg1;
- (struct CGPoint)primitiveCenter;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
