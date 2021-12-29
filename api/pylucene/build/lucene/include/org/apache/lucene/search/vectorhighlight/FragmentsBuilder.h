#ifndef org_apache_lucene_search_vectorhighlight_FragmentsBuilder_H
#define org_apache_lucene_search_vectorhighlight_FragmentsBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace highlight {
          class Encoder;
        }
        namespace vectorhighlight {
          class FieldFragList;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class FragmentsBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_createFragment_88fda903d6865251,
              mid_createFragment_23264a18dcb3de8b,
              mid_createFragments_96858e3aaaeddd60,
              mid_createFragments_59e4a59490ad9938,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FragmentsBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FragmentsBuilder(const FragmentsBuilder& obj) : ::java::lang::Object(obj) {}

            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &) const;
            ::java::lang::String createFragment(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint) const;
            JArray< ::java::lang::String > createFragments(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::org::apache::lucene::search::vectorhighlight::FieldFragList &, jint, const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::search::highlight::Encoder &) const;
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
          extern PyType_Def PY_TYPE_DEF(FragmentsBuilder);
          extern PyTypeObject *PY_TYPE(FragmentsBuilder);

          class t_FragmentsBuilder {
          public:
            PyObject_HEAD
            FragmentsBuilder object;
            static PyObject *wrap_Object(const FragmentsBuilder&);
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
