#ifndef java_lang_Character_H
#define java_lang_Character_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class Character;
    class String;
    class CharSequence;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Character : public ::java::lang::Object {
     public:
      enum {
        mid_init$_b227b2c08d18d29e,
        mid_charCount_1e143afe1894d213,
        mid_charValue_8eea1dd85c3239c3,
        mid_codePointAt_d4655f2a19359017,
        mid_codePointAt_7a9041c03b6e9981,
        mid_codePointAt_644fc0bf0aa7fb26,
        mid_codePointBefore_d4655f2a19359017,
        mid_codePointBefore_7a9041c03b6e9981,
        mid_codePointBefore_644fc0bf0aa7fb26,
        mid_codePointCount_644fc0bf0aa7fb26,
        mid_codePointCount_a0b845cd7e1b893f,
        mid_compare_69a9f8c5bb01c1f0,
        mid_compareTo_1e2c3e1773615084,
        mid_digit_6cfef1ec0cc467c0,
        mid_digit_57a58545eba514db,
        mid_equals_8b72f2dcdde6fd1d,
        mid_forDigit_768732b3cc5506bb,
        mid_getDirectionality_920874b8f5998fce,
        mid_getDirectionality_4d5233a30cda5878,
        mid_getName_d7593acad64ef635,
        mid_getNumericValue_6449734bbde5adfd,
        mid_getNumericValue_1e143afe1894d213,
        mid_getType_6449734bbde5adfd,
        mid_getType_1e143afe1894d213,
        mid_hashCode_9972fcc56b44e79d,
        mid_hashCode_6449734bbde5adfd,
        mid_highSurrogate_ebc61ec1e57770d1,
        mid_isAlphabetic_a1d30e1ee40c89a2,
        mid_isBmpCodePoint_a1d30e1ee40c89a2,
        mid_isDefined_540573ecd04ffc16,
        mid_isDefined_a1d30e1ee40c89a2,
        mid_isDigit_540573ecd04ffc16,
        mid_isDigit_a1d30e1ee40c89a2,
        mid_isHighSurrogate_540573ecd04ffc16,
        mid_isISOControl_540573ecd04ffc16,
        mid_isISOControl_a1d30e1ee40c89a2,
        mid_isIdentifierIgnorable_540573ecd04ffc16,
        mid_isIdentifierIgnorable_a1d30e1ee40c89a2,
        mid_isIdeographic_a1d30e1ee40c89a2,
        mid_isJavaIdentifierPart_540573ecd04ffc16,
        mid_isJavaIdentifierPart_a1d30e1ee40c89a2,
        mid_isJavaIdentifierStart_540573ecd04ffc16,
        mid_isJavaIdentifierStart_a1d30e1ee40c89a2,
        mid_isJavaLetter_540573ecd04ffc16,
        mid_isJavaLetterOrDigit_540573ecd04ffc16,
        mid_isLetter_540573ecd04ffc16,
        mid_isLetter_a1d30e1ee40c89a2,
        mid_isLetterOrDigit_540573ecd04ffc16,
        mid_isLetterOrDigit_a1d30e1ee40c89a2,
        mid_isLowSurrogate_540573ecd04ffc16,
        mid_isLowerCase_540573ecd04ffc16,
        mid_isLowerCase_a1d30e1ee40c89a2,
        mid_isMirrored_540573ecd04ffc16,
        mid_isMirrored_a1d30e1ee40c89a2,
        mid_isSpace_540573ecd04ffc16,
        mid_isSpaceChar_540573ecd04ffc16,
        mid_isSpaceChar_a1d30e1ee40c89a2,
        mid_isSupplementaryCodePoint_a1d30e1ee40c89a2,
        mid_isSurrogate_540573ecd04ffc16,
        mid_isSurrogatePair_98700694bd8e1746,
        mid_isTitleCase_540573ecd04ffc16,
        mid_isTitleCase_a1d30e1ee40c89a2,
        mid_isUnicodeIdentifierPart_540573ecd04ffc16,
        mid_isUnicodeIdentifierPart_a1d30e1ee40c89a2,
        mid_isUnicodeIdentifierStart_540573ecd04ffc16,
        mid_isUnicodeIdentifierStart_a1d30e1ee40c89a2,
        mid_isUpperCase_540573ecd04ffc16,
        mid_isUpperCase_a1d30e1ee40c89a2,
        mid_isValidCodePoint_a1d30e1ee40c89a2,
        mid_isWhitespace_540573ecd04ffc16,
        mid_isWhitespace_a1d30e1ee40c89a2,
        mid_lowSurrogate_ebc61ec1e57770d1,
        mid_offsetByCodePoints_a0b845cd7e1b893f,
        mid_offsetByCodePoints_77e39aa01f915269,
        mid_reverseBytes_87303ccbf3475d77,
        mid_toChars_4a35a620830b94db,
        mid_toChars_dfadfe275a0a8864,
        mid_toCodePoint_69a9f8c5bb01c1f0,
        mid_toLowerCase_87303ccbf3475d77,
        mid_toLowerCase_1e143afe1894d213,
        mid_toString_db9b55ba01e03e4b,
        mid_toString_4bb5e6191c541c0d,
        mid_toTitleCase_87303ccbf3475d77,
        mid_toTitleCase_1e143afe1894d213,
        mid_toUpperCase_87303ccbf3475d77,
        mid_toUpperCase_1e143afe1894d213,
        mid_valueOf_cfedc34e8f9b465a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Character(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Character(const Character& obj) : ::java::lang::Object(obj) {}

      static jint BYTES;
      static jbyte COMBINING_SPACING_MARK;
      static jbyte CONNECTOR_PUNCTUATION;
      static jbyte CONTROL;
      static jbyte CURRENCY_SYMBOL;
      static jbyte DASH_PUNCTUATION;
      static jbyte DECIMAL_DIGIT_NUMBER;
      static jbyte DIRECTIONALITY_ARABIC_NUMBER;
      static jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL;
      static jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR;
      static jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING;
      static jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE;
      static jbyte DIRECTIONALITY_NONSPACING_MARK;
      static jbyte DIRECTIONALITY_OTHER_NEUTRALS;
      static jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR;
      static jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING;
      static jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE;
      static jbyte DIRECTIONALITY_SEGMENT_SEPARATOR;
      static jbyte DIRECTIONALITY_UNDEFINED;
      static jbyte DIRECTIONALITY_WHITESPACE;
      static jbyte ENCLOSING_MARK;
      static jbyte END_PUNCTUATION;
      static jbyte FINAL_QUOTE_PUNCTUATION;
      static jbyte FORMAT;
      static jbyte INITIAL_QUOTE_PUNCTUATION;
      static jbyte LETTER_NUMBER;
      static jbyte LINE_SEPARATOR;
      static jbyte LOWERCASE_LETTER;
      static jbyte MATH_SYMBOL;
      static jint MAX_CODE_POINT;
      static jchar MAX_HIGH_SURROGATE;
      static jchar MAX_LOW_SURROGATE;
      static jint MAX_RADIX;
      static jchar MAX_SURROGATE;
      static jchar MAX_VALUE;
      static jint MIN_CODE_POINT;
      static jchar MIN_HIGH_SURROGATE;
      static jchar MIN_LOW_SURROGATE;
      static jint MIN_RADIX;
      static jint MIN_SUPPLEMENTARY_CODE_POINT;
      static jchar MIN_SURROGATE;
      static jchar MIN_VALUE;
      static jbyte MODIFIER_LETTER;
      static jbyte MODIFIER_SYMBOL;
      static jbyte NON_SPACING_MARK;
      static jbyte OTHER_LETTER;
      static jbyte OTHER_NUMBER;
      static jbyte OTHER_PUNCTUATION;
      static jbyte OTHER_SYMBOL;
      static jbyte PARAGRAPH_SEPARATOR;
      static jbyte PRIVATE_USE;
      static jint SIZE;
      static jbyte SPACE_SEPARATOR;
      static jbyte START_PUNCTUATION;
      static jbyte SURROGATE;
      static jbyte TITLECASE_LETTER;
      static ::java::lang::Class *TYPE;
      static jbyte UNASSIGNED;
      static jbyte UPPERCASE_LETTER;

      Character(jchar);

      static jint charCount(jint);
      jchar charValue() const;
      static jint codePointAt(const JArray< jchar > &, jint);
      static jint codePointAt(const ::java::lang::CharSequence &, jint);
      static jint codePointAt(const JArray< jchar > &, jint, jint);
      static jint codePointBefore(const JArray< jchar > &, jint);
      static jint codePointBefore(const ::java::lang::CharSequence &, jint);
      static jint codePointBefore(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const JArray< jchar > &, jint, jint);
      static jint codePointCount(const ::java::lang::CharSequence &, jint, jint);
      static jint compare(jchar, jchar);
      jint compareTo(const Character &) const;
      static jint digit(jchar, jint);
      static jint digit(jint, jint);
      jboolean equals(const ::java::lang::Object &) const;
      static jchar forDigit(jint, jint);
      static jbyte getDirectionality(jchar);
      static jbyte getDirectionality(jint);
      static ::java::lang::String getName(jint);
      static jint getNumericValue(jchar);
      static jint getNumericValue(jint);
      static jint getType(jchar);
      static jint getType(jint);
      jint hashCode() const;
      static jint hashCode(jchar);
      static jchar highSurrogate(jint);
      static jboolean isAlphabetic(jint);
      static jboolean isBmpCodePoint(jint);
      static jboolean isDefined(jchar);
      static jboolean isDefined(jint);
      static jboolean isDigit(jchar);
      static jboolean isDigit(jint);
      static jboolean isHighSurrogate(jchar);
      static jboolean isISOControl(jchar);
      static jboolean isISOControl(jint);
      static jboolean isIdentifierIgnorable(jchar);
      static jboolean isIdentifierIgnorable(jint);
      static jboolean isIdeographic(jint);
      static jboolean isJavaIdentifierPart(jchar);
      static jboolean isJavaIdentifierPart(jint);
      static jboolean isJavaIdentifierStart(jchar);
      static jboolean isJavaIdentifierStart(jint);
      static jboolean isJavaLetter(jchar);
      static jboolean isJavaLetterOrDigit(jchar);
      static jboolean isLetter(jchar);
      static jboolean isLetter(jint);
      static jboolean isLetterOrDigit(jchar);
      static jboolean isLetterOrDigit(jint);
      static jboolean isLowSurrogate(jchar);
      static jboolean isLowerCase(jchar);
      static jboolean isLowerCase(jint);
      static jboolean isMirrored(jchar);
      static jboolean isMirrored(jint);
      static jboolean isSpace(jchar);
      static jboolean isSpaceChar(jchar);
      static jboolean isSpaceChar(jint);
      static jboolean isSupplementaryCodePoint(jint);
      static jboolean isSurrogate(jchar);
      static jboolean isSurrogatePair(jchar, jchar);
      static jboolean isTitleCase(jchar);
      static jboolean isTitleCase(jint);
      static jboolean isUnicodeIdentifierPart(jchar);
      static jboolean isUnicodeIdentifierPart(jint);
      static jboolean isUnicodeIdentifierStart(jchar);
      static jboolean isUnicodeIdentifierStart(jint);
      static jboolean isUpperCase(jchar);
      static jboolean isUpperCase(jint);
      static jboolean isValidCodePoint(jint);
      static jboolean isWhitespace(jchar);
      static jboolean isWhitespace(jint);
      static jchar lowSurrogate(jint);
      static jint offsetByCodePoints(const ::java::lang::CharSequence &, jint, jint);
      static jint offsetByCodePoints(const JArray< jchar > &, jint, jint, jint, jint);
      static jchar reverseBytes(jchar);
      static JArray< jchar > toChars(jint);
      static jint toChars(jint, const JArray< jchar > &, jint);
      static jint toCodePoint(jchar, jchar);
      static jchar toLowerCase(jchar);
      static jint toLowerCase(jint);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jchar);
      static jchar toTitleCase(jchar);
      static jint toTitleCase(jint);
      static jchar toUpperCase(jchar);
      static jint toUpperCase(jint);
      static Character valueOf(jchar);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Character);
    extern PyTypeObject *PY_TYPE(Character);

    class t_Character {
    public:
      PyObject_HEAD
      Character object;
      static PyObject *wrap_Object(const Character&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
