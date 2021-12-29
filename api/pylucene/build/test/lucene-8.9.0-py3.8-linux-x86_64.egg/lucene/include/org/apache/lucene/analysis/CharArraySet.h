#ifndef org_apache_lucene_analysis_CharArraySet_H
#define org_apache_lucene_analysis_CharArraySet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Collection;
    class Iterator;
    class Set;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArraySet : public ::java::util::AbstractSet {
         public:
          enum {
            mid_init$_b8f283cdbda5c964,
            mid_init$_f6beb0ccda74bc04,
            mid_add_fb8687087fea5b69,
            mid_add_145b2d0af0c06b93,
            mid_add_2cd6b83cb18fe093,
            mid_add_8b72f2dcdde6fd1d,
            mid_clear_f2cc1bce94666404,
            mid_contains_2cd6b83cb18fe093,
            mid_contains_8b72f2dcdde6fd1d,
            mid_contains_4c2a9c7f32a6ad26,
            mid_copy_71a7a3c07a2deb95,
            mid_iterator_233a192dadb0917d,
            mid_size_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_unmodifiableSet_ef24ea4c2af717b3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArraySet(jobject obj) : ::java::util::AbstractSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArraySet(const CharArraySet& obj) : ::java::util::AbstractSet(obj) {}

          static CharArraySet *EMPTY_SET;

          CharArraySet(jint, jboolean);
          CharArraySet(const ::java::util::Collection &, jboolean);

          jboolean add(const JArray< jchar > &) const;
          jboolean add(const ::java::lang::String &) const;
          jboolean add(const ::java::lang::CharSequence &) const;
          jboolean add(const ::java::lang::Object &) const;
          void clear() const;
          jboolean contains(const ::java::lang::CharSequence &) const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean contains(const JArray< jchar > &, jint, jint) const;
          static CharArraySet copy(const ::java::util::Set &);
          ::java::util::Iterator iterator() const;
          jint size() const;
          ::java::lang::String toString() const;
          static CharArraySet unmodifiableSet(const CharArraySet &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharArraySet);
        extern PyTypeObject *PY_TYPE(CharArraySet);

        class t_CharArraySet {
        public:
          PyObject_HEAD
          CharArraySet object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArraySet *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArraySet&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArraySet&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
