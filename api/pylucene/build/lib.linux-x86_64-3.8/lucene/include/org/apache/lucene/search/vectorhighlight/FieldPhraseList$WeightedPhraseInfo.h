#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList$WeightedPhraseInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class List;
    class LinkedList;
  }
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
          class FieldTermStack$TermInfo;
          class FieldPhraseList$WeightedPhraseInfo;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FieldPhraseList$WeightedPhraseInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_50bc3ddc62a19f2d,
              mid_init$_cd3f2a3b82833b44,
              mid_init$_2b6b930e0d47737c,
              mid_compareTo_5122988dde28a408,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getBoost_58aec2b64dff50c8,
              mid_getEndOffset_9972fcc56b44e79d,
              mid_getSeqnum_9972fcc56b44e79d,
              mid_getStartOffset_9972fcc56b44e79d,
              mid_getTermsInfos_49ec78390f08338a,
              mid_getTermsOffsets_49ec78390f08338a,
              mid_getText_db9b55ba01e03e4b,
              mid_hashCode_9972fcc56b44e79d,
              mid_isOffsetOverlap_e3179a7d35efdda8,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList$WeightedPhraseInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList$WeightedPhraseInfo(const FieldPhraseList$WeightedPhraseInfo& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList$WeightedPhraseInfo(const ::java::util::Collection &);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat);
            FieldPhraseList$WeightedPhraseInfo(const ::java::util::LinkedList &, jfloat, jint);

            jint compareTo(const FieldPhraseList$WeightedPhraseInfo &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jfloat getBoost() const;
            jint getEndOffset() const;
            jint getSeqnum() const;
            jint getStartOffset() const;
            ::java::util::List getTermsInfos() const;
            ::java::util::List getTermsOffsets() const;
            ::java::lang::String getText() const;
            jint hashCode() const;
            jboolean isOffsetOverlap(const FieldPhraseList$WeightedPhraseInfo &) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldPhraseList$WeightedPhraseInfo);
          extern PyTypeObject *PY_TYPE(FieldPhraseList$WeightedPhraseInfo);

          class t_FieldPhraseList$WeightedPhraseInfo {
          public:
            PyObject_HEAD
            FieldPhraseList$WeightedPhraseInfo object;
            static PyObject *wrap_Object(const FieldPhraseList$WeightedPhraseInfo&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
