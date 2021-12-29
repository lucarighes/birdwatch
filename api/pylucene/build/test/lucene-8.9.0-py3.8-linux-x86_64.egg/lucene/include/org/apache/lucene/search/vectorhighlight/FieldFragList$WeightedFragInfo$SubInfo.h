#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList$WeightedFragInfo$SubInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo$Toffs;
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

          class FieldFragList$WeightedFragInfo$SubInfo : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f39f835ff251d495,
              mid_getBoost_58aec2b64dff50c8,
              mid_getSeqnum_9972fcc56b44e79d,
              mid_getTermsOffsets_49ec78390f08338a,
              mid_getText_db9b55ba01e03e4b,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldFragList$WeightedFragInfo$SubInfo(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldFragList$WeightedFragInfo$SubInfo(const FieldFragList$WeightedFragInfo$SubInfo& obj) : ::java::lang::Object(obj) {}

            FieldFragList$WeightedFragInfo$SubInfo(const ::java::lang::String &, const ::java::util::List &, jint, jfloat);

            jfloat getBoost() const;
            jint getSeqnum() const;
            ::java::util::List getTermsOffsets() const;
            ::java::lang::String getText() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldFragList$WeightedFragInfo$SubInfo);
          extern PyTypeObject *PY_TYPE(FieldFragList$WeightedFragInfo$SubInfo);

          class t_FieldFragList$WeightedFragInfo$SubInfo {
          public:
            PyObject_HEAD
            FieldFragList$WeightedFragInfo$SubInfo object;
            static PyObject *wrap_Object(const FieldFragList$WeightedFragInfo$SubInfo&);
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
